#include "cvector.h"

//int
vector* intv_ini(){
	vector *vec = malloc(sizeof(vector));
	vec->memory = memory_BEGIN;
	vec->size = 0;
	vec->values = malloc(sizeof(int)*vec->memory);
	return vec;
}

void intv_push(vector* vec, int value){
	vec->size++;
	if(vec->size > vec->memory){
		vec->memory *= 2;
		vec->values = realloc((int*)(vec->values), sizeof(int)*vec->memory);
	}
	((int*)(vec->values))[vec->size - 1] = value;
}

//short
vector* shortv_ini(){
	vector *vec = malloc(sizeof(vector));
	vec->memory = memory_BEGIN;
	vec->size = 0;
	vec->values = malloc(sizeof(short)*vec->memory);
	return vec;
}

void shortv_push(vector* vec, short value){
	vec->size++;
	if(vec->size > vec->memory){
		vec->memory *= 2;
		vec->values = realloc((short*)(vec->values), sizeof(short)*vec->memory);
	}
	((short*)(vec->values))[vec->size - 1] = value;
}

//long
vector* longv_ini(){
	vector *vec = malloc(sizeof(vector));
	vec->memory = memory_BEGIN;
	vec->size = 0;
	vec->values = malloc(sizeof(long)*vec->memory);
	return vec;
}

void longv_push(vector* vec, long value){
	vec->size++;
	if(vec->size > vec->memory){
		vec->memory *= 2;
		vec->values = realloc((long*)(vec->values), sizeof(long)*vec->memory);
	}
	((long*)(vec->values))[vec->size - 1] = value;
}

//float
vector* floatv_ini(){
	vector *vec = malloc(sizeof(vector));
	vec->memory = memory_BEGIN;
	vec->size = 0;
	vec->values = malloc(sizeof(float)*vec->memory);
	return vec;
}

void floatv_push(vector* vec, float value){
	vec->size++;
	if(vec->size > vec->memory){
		vec->memory *= 2;
		vec->values = realloc((float*)(vec->values), sizeof(float)*vec->memory);
	}
	((float*)(vec->values))[vec->size - 1] = value;
}

//double
vector* doublev_ini(){
	vector *vec = malloc(sizeof(vector));
	vec->memory = memory_BEGIN;
	vec->size = 0;
	vec->values = malloc(sizeof(double)*vec->memory);
	return vec;
}

void doublev_push(vector* vec, double value){
	vec->size++;
	if(vec->size > vec->memory){
		vec->memory *= 2;
		vec->values = realloc((double*)(vec->values), sizeof(double)*vec->memory);
	}
	((double*)(vec->values))[vec->size - 1] = value;
}

//char
vector* charv_ini(){
	vector *vec = malloc(sizeof(vector));
	vec->memory = memory_BEGIN;
	vec->size = 0;
	vec->values = malloc(sizeof(char)*vec->memory);
	return vec;
}

void charv_push(vector* vec, char value){
	vec->size++;
	if(vec->size > vec->memory){
		vec->memory *= 2;
		vec->values = realloc((char*)(vec->values), sizeof(char)*vec->memory);
	}
	((char*)(vec->values))[vec->size - 1] = value;
}

//free
void freev(vector* vec){
	free(vec->values);
	free(vec);
}
