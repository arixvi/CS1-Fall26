#include "grading.hpp"

char Grading::find_grade() const
{
    if (this->exam_score >= this->a)
        return 'A';
    else if (this->exam_score >= this->b)
        return 'B';
    else if (this->exam_score >= this->c) // #fixed#
        return 'C'; 
    else if (this->exam_score >= this->d) // #fixed#
        return 'D'; 
    else if (this->exam_score >= this->e) // #fixed#
        return 'E'; 
    else
        return 'F';
    // FIXME - add remaining grading rules
}