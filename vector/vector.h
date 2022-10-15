// VECTOR FUNCTIONS

struct Vector {
  unsigned int size;
  unsigned int capacity;
  int *data;
};

struct Vector* init();

void resize(struct Vector* vector);
void remove_back(struct Vector* vector);
void insert(struct Vector* vector, int value);
void print_data(struct Vector vector);

void insert_at_index(struct Vector* vector, int index, int value);
void remove_at_index(struct Vector* vector, int index);
void clear(struct Vector* vector);
void destroy(struct Vector* vector);
struct Vector* merge(struct Vector* vector_1, struct Vector* vector_2);

int get_value_by_index(struct Vector* vector, int index);
int is_full(struct Vector vector);
int is_empty(struct Vector vector);
