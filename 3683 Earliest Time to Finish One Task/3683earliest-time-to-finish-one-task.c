int earliestTime(int** tasks, int tasksSize, int* tasksColSize) {
    int res=201;
    for (int i=0; i<tasksSize; i++) {
        if ((tasks[i][0]+tasks[i][1])<res) {
            res= tasks[i][0]+tasks[i][1];
        }
    }
    return res;
}