BUILD_DIR = build
SOURCE_DIR = src
TEST_DIR = test
CFLAGS = -g -Wall -Wextra -Wpedantic 
GTEST_LIB = -lgtest -lgtest_main -lpthread

all: $(BUILD_DIR) main run_tests

main: $(BUILD_DIR)/test.o $(BUILD_DIR)/prime_factorize.o
	clang++ -o $(BUILD_DIR)/test $(CFLAGS) $(BUILD_DIR)/test.o $(BUILD_DIR)/prime_factorize.o $(GTEST_LIB)

$(BUILD_DIR)/test.o: $(TEST_DIR)/test.cpp
		clang++ -c $(CFLAGS) $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o

$(BUILD_DIR)/prime_factorize.o: $(SOURCE_DIR)/prime_factorize.cpp
		clang++ -c $(CFLAGS) $(SOURCE_DIR)/prime_factorize.cpp -o $(BUILD_DIR)/prime_factorize.o

run_tests: $(BUILD_DIR)/test
	$(BUILD_DIR)/test

clean: 
		rm -f $(BUILD_DIR)/test $(BUILD_DIR)/*.o

.PHONY: all clean

