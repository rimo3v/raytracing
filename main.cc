#include "vec3.h"
#include "color.h"
#include<iostream>

int main(){
    int image_width = 2560;
    int image_height = 2560;

    
    std::cout<<" P3\n"<<image_width<<" "<<image_height<<"\n255\n";
    for(int j = 0; j < image_height;j++){
        std::clog<<"\rScanlines remaining: "<<(image_height-j)<<" "<<std::flush;
        for(int i =0;i<image_width;i++){
            auto r = double(i)/(image_width-1);
            auto g = double(j)/(image_height-1);
            auto b = 0.25;
            color pixel_color(r, g, b);
            write_color(std::cout, pixel_color);

        }
    }
    std::clog<<"\rDone.                 \n";

}