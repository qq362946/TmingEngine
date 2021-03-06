//The MIT License
//
//Copyright(c) 2018 - 2019 littleblue
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this softwareand associated documentation files(the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
//copies of the Software, and to permit persons to whom the Software is furnished
//to do so, subject to the following conditions :
//
//The above copyright noticeand this permission notice shall be included in
//all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR
//COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#pragma once
#include "../EngineDefs.h"
#include <string>

namespace TmingEngine
{
    static const float Pi = 3.1415926;
    ENGINE_CLASS class Radian
    {
    
    private:
        float value;
    public:
        float x;
        
        Radian()
        {
            
        }
        
        Radian(float x)
        {
            this->x = x;
            value = x / 360.0f * 2 * Pi;
        }
       
        float GetRadian()
        {
            return value;
        }
        
        float GetAngle()
        {
            return x;
        }
        
//        static void operator*() const
//        {
//            
//        }

        std::string ToString() const;
    };
}
