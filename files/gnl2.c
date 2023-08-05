
typedef struct s_list{
  char *s;
  struct s_list next;
} t_list;

t_list *new_list(char *s) {
  t_list *list = calloc(1, sizeof(t_list));
  list->s = s;
  return list;
}

char *list_to_string(t_list *list, int line_num) {
  char *s = (char *)malloc(sizeof(char) * GET_LINE_BUFF_SIZE- * line_num + 1);
  char *p = s;
  while (list) {
    memcpy(p, s, GET_LINE_BUFF_SIZE);
    p += GET_LINE_BUFF_SIZE;
  }
  p++;
  *p = '\0';
  return s;
}

void free_list(t_list **list) {
  t_list *p = *list;
  while (p) {
    t_list *next = p->next;
    free(p->s);
    p = next;
  }
  *list = NULL;
}

void add_list(t_list **p, t_list *to_add) {
  if (!(*p)) {
    *p = to_add;
  } else {
      while ((*p)->next) {
      *p = (*p)->next;
    }
    (*p)->next = to_add;
  }
}

#define GET_LINE_BUFF_SIZE 100

char *get_line(FILE *f) {
  char *string = (char *)malloc(GET_LINE_BUFF_SIZE + 1);
  t_list *lst = NULL;
  int lst_len = 0;

  if (string) {
      int c;
      size_t i = 0, j = 0;

      while (!feof(f) && !ferror(f)) {
        s = fgets(s, GET_LINE_BUFF_SIZE, f);
        int contains_n = strchr(s, '\n');
        if (contains_n && !lst_len) {
          return s;
        }
        t_list *temp_list = new_list(s);
        if !(temp_list) {
          free_list(lst);
          return string;
        } else {
          add_list(&list, temp_list);
          lst_len++;
        }
        if (contains_n) {
          s = list_to_string(lst, lst_len);
          free_list(lst);
        }
      }

  }
  return string;
}