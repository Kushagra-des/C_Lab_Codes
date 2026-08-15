#include <stdio.h>
int main()
{
float pixel_row, pixel_col, bits_per_frame, bits_per_frame_kb, transfer_time;
printf("Number of Pixels in a Row:");
scanf("%f",& pixel_row);
printf("Number of Pixels in a Column:");
scanf("%f",& pixel_col);
bits_per_frame = (pixel_row*pixel_col*24)/(1024*1024);
printf("Bits per Frame: %f", bits_per_frame);
bits_per_frame_kb = 1024* bits_per_frame;
transfer_time = (100*bits_per_frame_kb)/512;
printf("\n Transfer Time: %f", transfer_time);
return 0;
}
