#include "unity.h"

#define PROJECT_NAME  "contact management"

/* Prototypes for all the test functions */

/**
 * @brief Testing function for contact_management * 
 */
extern void test_contactmanagement();

/* Required by the unity test framework */
void setUp(void)
{
}

/* Required by the unity test framework */
void tearDown(void)
{
}

/* Start of the application test */
int main(void)
{
    /* Initiate the Unity Test Framework */
    UnityBegin(NULL);

    /* Run Test functions */
    RUN_TEST(test_contactmanagement);
    
     /* Close the Unity Test Framework */
    return (UnityEnd());
}