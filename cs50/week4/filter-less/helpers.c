#include "helpers.h"
#include <math.h>

// Global constant for number of RGB values.
const int RGB_VALUES = 3;

// Convert image to grayscale.
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Iterate over all pixels in row px_row and column px_col.
    for (int px_row = 0; px_row < height; px_row++)
    {
        for (int px_col = 0; px_col < width; px_col++)
        {
            // Store R/G/B values for the pixel.
            int r_orig = image[px_row][px_col].rgbtRed;
            int g_orig = image[px_row][px_col].rgbtGreen;
            int b_orig = image[px_row][px_col].rgbtBlue;

            // Take average of R/G/B values, rounded to the nearest int.
            int gray_avg = (int) round(((r_orig + g_orig + b_orig) /
                                        (float) RGB_VALUES));

            // Update pixel values in array.
            image[px_row][px_col].rgbtRed = gray_avg;
            image[px_row][px_col].rgbtGreen = gray_avg;
            image[px_row][px_col].rgbtBlue = gray_avg;
        }
    }

    return;
}

// Convert image to sepia.
void sepia(int height, int width, RGBTRIPLE image[height][width])
{

    // Iterate over all pixels in row px_row and column px_col.
    for (int px_row = 0; px_row < height; px_row++)
    {
        for (int px_col = 0; px_col < width; px_col++)
        {
            // Store R/G/B values for the pixel in orig[].
            int orig[RGB_VALUES] = {
                image[px_row][px_col].rgbtRed,
                image[px_row][px_col].rgbtGreen,
                image[px_row][px_col].rgbtBlue
            };

            // Store sepia conversion factors. Multiply each original
            // R/G/B value by the factors in each row, respectively, to
            // get that row's sepia value.
            float conv_factors[RGB_VALUES][RGB_VALUES] = {
                {0.393, 0.769, 0.189},  // Row 0: R; Columns: R, G, B
                {0.349, 0.686, 0.168},  // Row 1: G; Columns: R, G, B
                {0.272, 0.534, 0.131}   // Row 2: B; Columns: R, G, B
            };

            // Initialize all sepia values to 0.0 for conversion sum.
            float sepia[RGB_VALUES] = {0.0};

            // Convert to sepia using conv_factors row/col structure.
            for (int rgb_row = 0; rgb_row < RGB_VALUES; rgb_row++)
            {
                for (int rgb_col = 0; rgb_col < RGB_VALUES; rgb_col++)
                {
                    // Compute sepia values by adding respective products.
                    sepia[rgb_row] += (conv_factors[rgb_row][rgb_col] *
                                       orig[rgb_col]);
                }

                // Cap each converted sepia value at 255.
                if (sepia[rgb_row] > 255)
                {
                    sepia[rgb_row] = 255;
                }
            }

            // Update pixel values in array.
            image[px_row][px_col].rgbtRed = sepia[0];
            image[px_row][px_col].rgbtGreen = sepia[1];
            image[px_row][px_col].rgbtBlue = sepia[2];
        }
    }

    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{


    // Iterate over all pixels in row px_row and column px_col.
    for (int px_row = 0; px_row < height; px_row++)
    {
        for (int px_col = 0; px_col < width; px_col++)
        {
            // Store R/G/B values for the pixel in orig[].
            int orig[RGB_VALUES] = {
                image[px_row][px_col].rgbtRed,
                image[px_row][px_col].rgbtGreen,
                image[px_row][px_col].rgbtBlue
            };


            // Make a buffer variable for the entire pixel's

            // original x location

/*
            // Store sepia conversion factors. Multiply each original
            // R/G/B value by the factors in each row, respectively, to
            // get that row's sepia value.
            float conv_factors[RGB_VALUES][RGB_VALUES] = {
                {0.393, 0.769, 0.189},  // Row 0: R; Columns: R, G, B
                {0.349, 0.686, 0.168},  // Row 1: G; Columns: R, G, B
                {0.272, 0.534, 0.131}   // Row 2: B; Columns: R, G, B
            };

            // Initialize all sepia values to 0.0 for conversion sum.
            float sepia[RGB_VALUES] = {0.0};

            // Convert to sepia using conv_factors row/col structure.
            for (int rgb_row = 0; rgb_row < RGB_VALUES; rgb_row++)
            {
                for (int rgb_col = 0; rgb_col < RGB_VALUES; rgb_col++)
                {
                    // Compute sepia values by adding respective products.
                    sepia[rgb_row] += (conv_factors[rgb_row][rgb_col] *
                                       orig[rgb_col]);
                }

                // Cap each converted sepia value at 255.
                if (sepia[rgb_row] > 255)
                {
                    sepia[rgb_row] = 255;
                }
            }

            // Update pixel values in array.
            image[px_row][px_col].rgbtRed = sepia[0];
            image[px_row][px_col].rgbtGreen = sepia[1];
            image[px_row][px_col].rgbtBlue = sepia[2];

*/

        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{



    return;
}
