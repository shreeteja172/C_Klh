// int mostBalancedPartition(int parent_count, int* parent, int files_size_count, int* files_size) {
//     int sizemax = 0;
//     int* sizestree = (int*)malloc(parent_count * sizeof(int));

//     for (int i = 0; i < parent_count; i++) {
//         sizemax += files_size[i];
//         sizestree[i] = files_size[i];
//     }

//     for (int i = parent_count - 1; i >= 0; i--) {
//         for (int j = 0; j < parent_count; j++) {
//             if (parent[j] == i) {
//                 sizestree[i] += sizestree[j];
//             }
//         }
//     }

//     int mindiffer = sizemax;
//     for (int i = 1; i < parent_count; i++) {
//         int subtree1 = sizestree[i];
//         int subtree2 = sizemax - subtree1;
//         int diff = abs(subtree1 - subtree2);
//         mindiffer = (diff < mindiffer) ? diff : mindiffer;
//     }

//     free(sizestree);
//     return mindiffer;
// }












