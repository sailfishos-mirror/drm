/*
 * SPDX-FileCopyrightText: 1999 Precision Insight, Inc., Cedar Park, Texas.
 * SPDX-License-Identifier: MIT
 * SPDX-FileContributor: Rickard E. (Rik) Faith <faith@valinux.com>
 */

#define HASH_SIZE  512		/* Good for about 100 entries */
				/* If you change this value, you probably
                                   have to change the HashHash hashing
                                   function! */

typedef struct HashBucket {
    unsigned long     key;
    void              *value;
    struct HashBucket *next;
} HashBucket, *HashBucketPtr;

typedef struct HashTable {
    unsigned long    magic;
    unsigned long    entries;
    unsigned long    hits;	/* At top of linked list */
    unsigned long    partials;	/* Not at top of linked list */
    unsigned long    misses;	/* Not in table */
    HashBucketPtr    buckets[HASH_SIZE];
    int              p0;
    HashBucketPtr    p1;
} HashTable, *HashTablePtr;
