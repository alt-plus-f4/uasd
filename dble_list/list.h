struct dble_list {
  int value;
  struct dble_list *prev;
  struct dble_list *next;
};

struct dble_list * innit();

int get_size(struct dble_list *head); // Returns the size of the list
int contains(struct dble_list *head, int value); // Returns 1 if value is found 0 if not
void print_list(struct dble_list *head);
void swap(struct dble_list * first, struct dble_list * second);
void swapointers(struct dble_list * p1, struct dble_list * p2);
struct dble_list * push_back(struct dble_list *head, int new_value);
struct dble_list * bubble_sort_dble_list(struct dble_list *head);