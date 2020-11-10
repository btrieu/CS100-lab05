#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
        this->width = 0;
        this->height = 0;
}

Rectangle::Rectangle(int w, int h) {
        this->width = w;
        this->height = h;
}

void Rectangle::set_width(int w) {
        this->width = w;
}

void Rectangle::set_height(int h) {
        this->height = h;
}

int Rectangle::area() {
	if(height < 0 && width < 0) {
		return height*width;
	}
	else if (height < 0) {
		return height*width*-1;
	}
	else if (width < 0) {
		return height*width*-1;
	}
	return height*width;
}

int Rectangle::perimeter() {
	int modifiedHeight = height;
	int modifiedWidth = width;
	if(height < 0) {
		modifiedHeight = height *-1;
	}
	if(width < 0) {
		modifiedWidth = width *-1;
	}
        return modifiedHeight+modifiedHeight+modifiedWidth+modifiedWidth;
}

