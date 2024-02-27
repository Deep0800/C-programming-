//WAP to show difference between Structure and Union.

#include <stdio.h>
#include <string.h>

struct StructureExample {
    int intData;
    float floatData;
    char charData[20];
};

union UnionExample {
    int intData;
    float floatData;
    char charData[20];
};

int main() {

    struct StructureExample structVar;
    structVar.intData = 10;
    structVar.floatData = 3.14;
    strcpy(structVar.charData, "Structure");

    printf("Structure:\n");
    printf("Integer Data: %d\n", structVar.intData);
    printf("Float Data: %.2f\n", structVar.floatData);
    printf("Character Data: %s\n", structVar.charData);
    printf("Size of Structure: %lu bytes\n", sizeof(struct StructureExample));

    union UnionExample unionVar;
    unionVar.intData = 20;
    unionVar.floatData = 6.28;
    strcpy(unionVar.charData, "Union");

    printf("\nUnion:\n");
    printf("Integer Data: %d\n", unionVar.intData);
    printf("Float Data: %.2f\n", unionVar.floatData);
    printf("Character Data: %s\n", unionVar.charData);
    printf("Size of Union: %lu bytes\n", sizeof(union UnionExample));

    return 0;
}
