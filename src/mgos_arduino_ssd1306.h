/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 *
 * Arduino Adafruit_SSD1306 library API wrapper
 */

#include "Adafruit_SSD1306.h"

#ifdef __cplusplus
extern "C"
{
#endif

// Initialize Adafruit_SSD1306 library for I2C.
// Return value: handle opaque pointer.
// We set the reset pin and
// Resolution: 0 - RES_96_16, 1 - RES_128_32, 2 - RES_128_64.
Adafruit_SSD1306 *mgos_ssd1306_create_i2c(int rst, int res);
// Initialize Adafruit_SSD1306 library for SPI.
// Return value: handle opaque pointer.
// We set DataCommand, ChipSelect, Reset and
// Resolution: 0 - RES_96_16, 1 - RES_128_32, 2 - RES_128_64.
Adafruit_SSD1306 *mgos_ssd1306_create_spi(int dc, int rst, int cs, int res);
// Close Adafruit_SSD1306 handle. Return value: none.
void mgos_ssd1306_close(Adafruit_SSD1306 *ssd);
// Initialize the display.
void mgos_ssd1306_begin(Adafruit_SSD1306 *ssd, int vccstate, int i2caddr, bool reset);

void mgos_ssd1306_command(Adafruit_SSD1306 *ssd, int c);

void mgos_ssd1306_clear_display(Adafruit_SSD1306 *ssd);
void mgos_ssd1306_invert_display(Adafruit_SSD1306 *ssd, int i);
void mgos_ssd1306_display(Adafruit_SSD1306 *ssd);

// Activates a right handed scroll for rows start through stop.
void mgos_ssd1306_start_scroll_right(Adafruit_SSD1306 *ssd, int start, int stop);
// Activates a right handed scroll for rows start through stop.
void mgos_ssd1306_start_scroll_left(Adafruit_SSD1306 *ssd, int start, int stop);
// Activates a diagonal scroll for rows start through stop.
void mgos_ssd1306_start_scroll_diag_right(Adafruit_SSD1306 *ssd, int start, int stop);
// Activates a diagonal scroll for rows start through stop.
void mgos_ssd1306_start_scroll_diag_left(Adafruit_SSD1306 *ssd, int start, int stop);
// Stops scroll.
void mgos_ssd1306_stop_scroll(Adafruit_SSD1306 *ssd);

// Dims the display.
// dim = 1: display is dimmed;
// dim = 0: display is normal.
void mgos_ssd1306_dim(Adafruit_SSD1306 *ssd, int dim);

// Sets a single pixel.
void mgos_ssd1306_draw_pixel(Adafruit_SSD1306 *ssd, int x, int y, int color);
void mgos_ssd1306_draw_fast_vline(Adafruit_SSD1306 *ssd, int x, int y, int h, int color);
void mgos_ssd1306_draw_fast_hline(Adafruit_SSD1306 *ssd, int x, int y, int w, int color);

//Adafruit_GFX
int mgos_ssd1306_make_xy_pair(int x, int y);

void mgos_ssd1306_draw_circle(Adafruit_SSD1306 *ssd,
                              int x0y0, int r, int color);

void mgos_ssd1306_draw_circle_helper(Adafruit_SSD1306 *ssd,
                                     int x0y0, int r, int cornername, int color);

void mgos_ssd1306_fill_circle(Adafruit_SSD1306 *ssd,
                              int x0y0, int r, int color);

void mgos_ssd1306_fill_circle_helper(Adafruit_SSD1306 *ssd,
                                     int x0y0, int r, int cornername, int delta, int color);

void mgos_ssd1306_draw_triangle(Adafruit_SSD1306 *ssd,
                                int x0y0, int x1y1, int x2y2, int color);

void mgos_ssd1306_fill_triangle(Adafruit_SSD1306 *ssd,
                                int x0y0, int x1y1, int x2y2, int color);

void mgos_ssd1306_draw_round_rect(Adafruit_SSD1306 *ssd,
                                  int x0y0, int w, int h, int radius, int color);

void mgos_ssd1306_fill_round_rect(Adafruit_SSD1306 *ssd,
                                  int x0y0, int w, int h, int radius, int color);

void mgos_ssd1306_draw_char(Adafruit_SSD1306 *ssd,
                            int xy, int c, int color, int bg, int size);

void mgos_ssd1306_set_cursor(Adafruit_SSD1306 *ssd, int x, int y);

void mgos_ssd1306_set_text_color(Adafruit_SSD1306 *ssd, int c);
void mgos_ssd1306_set_text_color_bg(Adafruit_SSD1306 *ssd, int c, int bg);
void mgos_ssd1306_set_text_size(Adafruit_SSD1306 *ssd, int s);
void mgos_ssd1306_set_text_wrap(Adafruit_SSD1306 *ssd, boolean w);

int mgos_ssd1306_write(Adafruit_SSD1306 *ssd, const char *buffer, int size);

int mgos_ssd1306_height(Adafruit_SSD1306 *ssd);
int mgos_ssd1306_width(Adafruit_SSD1306 *ssd);

int mgos_ssd1306_get_rotation(Adafruit_SSD1306 *ssd);

// get current cursor position (get rotation safe maximum values, using: width() for x, height() for y)
int mgos_ssd1306_get_cursor_x(Adafruit_SSD1306 *ssd);
int mgos_ssd1306_get_cursor_y(Adafruit_SSD1306 *ssd);

#ifdef __cplusplus
}
#endif  /* __cplusplus */
