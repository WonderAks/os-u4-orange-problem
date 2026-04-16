// index.h --- Index (staging area) interface definition
#ifndef INDEX_H
#define INDEX_H

#include "pes.h"

typedef struct IndexEntry {
    uint32_t mode;
    ObjectID id;
    uint32_t mtime_sec;
    uint32_t size;
    char path[256];
} IndexEntry;

typedef struct Index {
    IndexEntry entries[1000];
    int count;
} Index;

int index_load(const char *path, Index *index_out);
int index_save(const Index *index);
int index_add(Index *index, const char *path);
int index_find(Index *index, const char *path);
int index_remove(Index *index, const char *path);
int index_status(const Index *index);

#endif // INDEX_H
