#include "cnn.h"
#include "definitions.h"

void cnn_top(float image[IMG_ROWS][IMG_COLS], float prediction[DIGITS]) {
    #pragma HLS interface m_axi port=image depth=784 offset=slave bundle=INPUT
    #pragma HLS interface m_axi port=prediction depth=DIGITS offset=slave bundle=OUTPUT
    #pragma HLS interface s_axilite port=return

    cnn(image, prediction); // Call the core CNN function
}