// object.h --- Object storage interface definition
#ifndef OBJECT_H
#define OBJECT_H

#include "pes.h"

// Object write and read functions for content-addressable storage
int object_write(ObjectType type, const void *data, size_t len, ObjectID *id_out);
int object_read(const ObjectID *id, ObjectType *type_out, void **data_out, size_t *len_out);

#endif // OBJECT_H
