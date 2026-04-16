// tree.h --- Tree object interface definition
#ifndef TREE_H
#define TREE_H

#include "pes.h"
#include "index.h"

typedef struct TreeEntry {
    uint32_t mode;
    ObjectID id;
    char name[256];
} TreeEntry;

int tree_from_index(const char *index_path, ObjectID *tree_id_out);
int get_file_mode(const char *path);
void tree_serialize(TreeEntry *entries, int count, void **buf_out, size_t *len_out);
void tree_parse(const void *data, size_t len, TreeEntry **entries_out, int *count_out);

#endif // TREE_H
