/*
 * =====================================================================================
 *
 *       Filename:  Dumbexample.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  11/25/19 20:11:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include "Dumbexample.h"

int8_t AvergeThreeBytes(int8_t a, int8_t b , int8_t c)
{
  return (int8_t)(((int16_t)a + (int16_t)b + (int16_t)c )/3);
}

