/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "roman_calculator-test.check" instead.
 */

#include <check.h>

#line 1 "roman_calculator-test.check"
#include "stdlib.h"
#include "roman_calculator.h"

START_TEST(roman_additionTwoRomanNumeralsTogether)
{
#line 5
    ck_assert_str_eq(roman_addition("CCCLXIX", "DCCCXLV"), "MCCXIV");
}
END_TEST

START_TEST(roman_additionIIandVequalVII)
{
#line 7
    ck_assert_str_eq(roman_addition("II", "V"), "VII");
}
END_TEST

START_TEST(roman_additionIIIIandVequalIX)
{
#line 9
    ck_assert_str_eq(roman_addition("IIII", "V"), "IX");
}
END_TEST

START_TEST(roman_additionLIIandVequalCIII)
{
#line 11
    ck_assert_str_eq(roman_addition("LII", "LI"), "CIII");
}
END_TEST

START_TEST(roman_additionMCLIIandCLIXequalMCCCXI)
{
#line 13
    ck_assert_str_eq(roman_addition("MCLII", "CLIX"), "MCCCXI");


}
END_TEST

START_TEST(roman_subtractsTheSecondRomanNumeral)
{
#line 17
    ck_assert_str_eq(roman_subtraction("CCCLXIX", "DCCCXLV"), "CDLXXVI");
}
END_TEST

START_TEST(roman_subtractIIandVequalVII)
{
#line 19
    ck_assert_str_eq(roman_subtraction("II", "V"), "III");
}
END_TEST

START_TEST(roman_subtractIIIIandVequalIX)
{
#line 21
    ck_assert_str_eq(roman_subtraction("IIII", "V"), "I");
}
END_TEST

START_TEST(roman_subtractLIIandVequalCIII)
{
#line 23
    ck_assert_str_eq(roman_subtraction("LII", "LI"), "I");
}
END_TEST

START_TEST(roman_subtractMCLIIandCLIXequalMCCCXI)
{
#line 25
    ck_assert_str_eq(roman_subtraction("MCLII", "CLIX"), "CMXCIII");

}
END_TEST

START_TEST(roman_subtractDandIequalCDXCIX)
{
#line 28
    ck_assert_str_eq(roman_subtraction("D", "I"), "CDXCIX");
}
END_TEST

START_TEST(roman_subtractMandIequalCDXCIX)
{
#line 30
    ck_assert_str_eq(roman_subtraction("M", "I"), "CMXCIX");

}
END_TEST

START_TEST(roman_subtractionMMtoMCDVIIequalDXCIII)
{
#line 33
	ck_assert_str_eq(roman_subtraction("MM", "MCDVII"), "DXCIII");
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, roman_additionTwoRomanNumeralsTogether);
    tcase_add_test(tc1_1, roman_additionIIandVequalVII);
    tcase_add_test(tc1_1, roman_additionIIIIandVequalIX);
    tcase_add_test(tc1_1, roman_additionLIIandVequalCIII);
    tcase_add_test(tc1_1, roman_additionMCLIIandCLIXequalMCCCXI);
    tcase_add_test(tc1_1, roman_subtractsTheSecondRomanNumeral);
    tcase_add_test(tc1_1, roman_subtractIIandVequalVII);
    tcase_add_test(tc1_1, roman_subtractIIIIandVequalIX);
    tcase_add_test(tc1_1, roman_subtractLIIandVequalCIII);
    tcase_add_test(tc1_1, roman_subtractMCLIIandCLIXequalMCCCXI);
    tcase_add_test(tc1_1, roman_subtractDandIequalCDXCIX);
    tcase_add_test(tc1_1, roman_subtractMandIequalCDXCIX);
    tcase_add_test(tc1_1, roman_subtractionMMtoMCDVIIequalDXCIII);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
