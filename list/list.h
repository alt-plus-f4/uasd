struct list_node_t {
  int value;
  struct list_node_t *next;
};

// NEW funcs
int get_size(struct list_node_t *head); // Returns the size of the list
int contains(struct list_node_t *head, int value); // Returns 1 if value is found 0 if not
struct list_node_t * pop_front(struct list_node_t *head);
struct list_node_t * pop_back(struct list_node_t *head);
struct list_node_t * insert(struct list_node_t *head, int value, int index);
struct list_node_t * remove_item(struct list_node_t *head, int index); // REMOVE FUNCTION USED IN STDIO

// Old foos 
void print_list(struct list_node_t *head);
struct list_node_t * push_front(struct list_node_t *head, int new_value);
struct list_node_t * push_back(struct list_node_t *head, int new_value);