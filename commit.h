// commit.h --- Commit object interface definition
#ifndef COMMIT_H
#define COMMIT_H

#include "pes.h"

typedef struct Commit {
    ObjectID tree;
    ObjectID parent;
    char author[256];
    uint32_t timestamp;
    char message[1024];
} Commit;

int commit_create(const char *message, ObjectID *commit_id_out);

#endif // COMMIT_H
