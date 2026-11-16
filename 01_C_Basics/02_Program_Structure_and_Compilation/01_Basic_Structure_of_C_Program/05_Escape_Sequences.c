#include <stdio.h>

int main()
{
    // 1. Newline
    printf("\n1. NEWLINE");
    printf("\nMy name is Riya\nI am learning C");

    // 2. Horizontal Tab
    printf("\n\n2. HORIZONTAL TAB");
    printf("\nName\tAge\tCourse");
    printf("\nRiya\t17\tCSE");

    // 3. Backslash
    printf("\n\n3. BACKSLASH");
    printf("\nC:\\Users\\Riya\\Desktop");

    // 4. Double Quotation
    printf("\n\n4. DOUBLE QUOTATION");
    printf("\nShe said \"Hello\"");

    // 5. Single Quotation
    printf("\n\n5. SINGLE QUOTATION");
    printf("\nRiya\'s C Program");

    // 6. Backspace
    printf("\n\n6. BACKSPACE");
    printf("\nABC\bD");

    // 7. Carriage Return
    printf("\n\n7. CARRIAGE RETURN");
    printf("\nHello\rWorld");

    // 8. Alert
    printf("\n\n8. ALERT");
    printf("\aAlert character");

    // 9. Form Feed
    printf("\n\n9. FORM FEED");
    printf("\nFirst Page\fSecond Page");

    // 10. Vertical Tab
    printf("\n\n10. VERTICAL TAB");
    printf("\nName\vRiya");

    // 11. Question Mark
    printf("\n\n11. QUESTION MARK");
    printf("\nAre you learning C\?");

    // 12. Null Character
    printf("\n\n12. NULL CHARACTER");
    printf("\nHello\0World");

    // 13. Octal Escape Sequence
    printf("\n\n13. OCTAL ESCAPE SEQUENCE");
    printf("\n%c", '\101');
    printf("\n%c", '\102');
    printf("\n%c", '\103');

    // 14. Hexadecimal Escape Sequence
    printf("\n\n14. HEXADECIMAL ESCAPE SEQUENCE");
    printf("\n%c", '\x41');
    printf("\n%c", '\x42');
    printf("\n%c", '\x43');

    // 15. Percentage Symbol in printf
    printf("\n\n15. PERCENTAGE SYMBOL");
    printf("\n100%% dedication");

    printf("\n\nProgram completed.");

    return 0;
}