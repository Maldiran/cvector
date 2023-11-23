#if !defined(CVECTOR_H)

#include <stdlib.h>
#define memory_BEGIN 32

//macros
//int
#define intv(name) vector *name = intv_ini()
#define intv_value(name, index) ((int*)(name->values))[index]
#define intv_pop(vec) vec->size--
#define intv_memory(vec) vec->memory
#define intv_size(vec) vec->size
//short
#define shortv(name) vector *name = shortv_ini()
#define shortv_value(name, index) ((short*)(name->values))[index]
#define shortv_pop(vec) vec->size--
#define shortv_memory(vec) vec->memory
#define shortv_size(vec) vec->size
//long
#define longv(name) vector *name = longv_ini()
#define longv_value(name, index) ((long*)(name->values))[index]
#define longv_pop(vec) vec->size--
#define longv_memory(vec) vec->memory
#define longv_size(vec) vec->size
//float
#define floatv(name) vector *name = floatv_ini()
#define floatv_value(name, index) ((float*)(name->values))[index]
#define floatv_pop(vec) vec->size--
#define floatv_memory(vec) vec->memory
#define floatv_size(vec) vec->size
//double
#define doublev(name) vector *name = doublev_ini()
#define doublev_value(name, index) ((double*)(name->values))[index]
#define doublev_pop(vec) vec->size--
#define doublev_memory(vec) vec->memory
#define doublev_size(vec) vec->size
//char
#define charv(name) vector *name = charv_ini()
#define charv_value(name, index) ((char*)(name->values))[index]
#define charv_pop(vec) vec->size--
#define charv_memory(vec) vec->memory
#define charv_size(vec) vec->size

typedef struct vector{
	int memory;
	int size;
	void *values;
}vector;

void freev(vector*);
vector* intv_ini();
void intv_push(vector*, int);
vector* shortv_ini();
void shortv_push(vector*, short);
vector* longv_ini();
void longv_push(vector*, long);
vector* floatv_ini();
void floatv_push(vector*, float);
vector* doublev_ini();
void doublev_push(vector*, double);
vector* charv_ini();
void charv_push(vector*, char);

#endif
