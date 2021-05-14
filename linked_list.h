//
// Created by Pierre Jeannin on 14/05/2021.
//

#ifndef MYTEAMSPARSER_LINKED_LIST_H
#define MYTEAMSPARSER_LINKED_LIST_H

typedef struct linked_list_s {
    void *data;
    struct linked_list_s *next;
} linked_list_t;

#endif //MYTEAMSPARSER_LINKED_LIST_H
