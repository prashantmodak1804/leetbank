int calPoints(char** operations, int operationsSize) {
    int record[1000];
    int top = 0;

    for (int i = 0; i < operationsSize; i++) {
        char* op = operations[i];

        if (op[0] == 'C') {
            top--;
        } else if (op[0] == 'D') {
            record[top] = 2 * record[top - 1];
            top++;
        } else if (op[0] == '+') {
            record[top] = record[top - 1] + record[top - 2];
            top++;
        } else {
            record[top++] = atoi(op);
        }
    }

    int sum = 0;
    for (int i = 0; i < top; i++) {
        sum += record[i];
    }

    return sum;
}