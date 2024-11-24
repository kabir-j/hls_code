#pragma once
#include <math.h>
#include "definitions.h"

float ReLU(float x);
void softmax(float FC_output[DIGITS], float FC_pred[DIGITS]);
