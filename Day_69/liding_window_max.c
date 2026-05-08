for(int i = 0; i < n; i++) {

    while(front <= rear && dq[front] <= i - k)
        front++;

    while(front <= rear && arr[dq[rear]] <= arr[i])
        rear--;

    dq[++rear] = i;

    if(i >= k - 1)
        printf("%d ", arr[dq[front]]);
}