#include <stdio.h>
#include <stdlib.h>

#define NUM_CANDIDATES 6

typedef struct {
    char name[50];
    char birthday[11];
    char gender[2];
    char email[50];
    char nationality[50];
    float bmi;
    char main_skill[50];
    char sub_skill[50];
    char topik[10];
    char mbti[5];
    char intro[255];
} member_info;

member_info candidate01, candidate02, candidate03, candidate04, candidate05, candidate06;
member_info* candidates[NUM_CANDIDATES] = {&candidate01, &candidate02, &candidate03, &candidate04, &candidate05, &candidate06};

int main() {
    int i = 0;

    printf("####################################\n");
    printf("     오디션 후보자 데이터 입력\n");
    printf("####################################\n");

    while (i < NUM_CANDIDATES) {
        printf("%d 번째 후보자의 정보를 입력합니다.\n", i + 1);
        printf("---------------------------------\n");
        printf("1. 성명: ");
        scanf(" %[^\n]", candidates[i]->name);
        printf("2. 생일(YYYY/MM/DD 형식): ");
        scanf(" %[^\n]", candidates[i]->birthday);
        printf("3. 성별(여성이면 F 또는 남성이면 M): ");
        scanf(" %[^\n]", candidates[i]->gender);
        printf("4. 메일 주소: ");
        scanf(" %[^\n]", candidates[i]->email);
        printf("5. 국적: ");
        scanf(" %[^\n]", candidates[i]->nationality);
        printf("6. BMI: ");
        scanf("%f", &candidates[i]->bmi);
        printf("7. 주 스킬: ");
        scanf(" %[^\n]", candidates[i]->main_skill);
        printf("8. 보조 스킬: ");
        scanf(" %[^\n]", candidates[i]->sub_skill);
        printf("9. 한국어 등급(TOPIK): ");
        scanf(" %[^\n]", candidates[i]->topik);
        printf("10. MBTI: ");
        scanf(" %[^\n]", candidates[i]->mbti);
        printf("11. 소개: ");
        scanf(" %[^\n]", candidates[i]->intro);
        printf("=================================\n");
        i++;
    }

    printf("###################################\n");
    printf("     오디션 후보자 데이터 조회\n");
    printf("###################################\n");
    printf("=============================================================================================\n");
    printf("성   명 | 생   일 | 성별 | 메   일            | 국적 | BMI | 주스킬 | 보조스킬 | TOPIK | MBTI |\n");
    printf("=============================================================================================\n");

    for (i = 0; i < NUM_CANDIDATES; i++) {
        printf("%s | %s | %s | %s | %s | %.1f | %s | %s | %s | %s |\n", 
            candidates[i]->name, candidates[i]->birthday, candidates[i]->gender, candidates[i]->email, 
            candidates[i]->nationality, candidates[i]->bmi, candidates[i]->main_skill, 
            candidates[i]->sub_skill, candidates[i]->topik, candidates[i]->mbti);
        printf("---------------------------------------------------------------------------------------------\n");
        printf("%s\n", candidates[i]->intro);
        printf("---------------------------------------------------------------------------------------------\n");
    }

    return 0;
}
