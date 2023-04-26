#include <iostream>
#include <string>
#include <unordered_set>
#include <cmath>
#include <algorithm>

using namespace std;

void common_elements(int* list1, int size1, int* list2, int size2) {
    unordered_set<int> set(list1, list1 + size1);
    for (int i = 0; i < size2; i++) {
        if (set.erase(list2[i])) {
            cout << list2[i] << " ";
        }
    }
    cout << endl;
}

bool is_palindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            return false;
        }
    }
    return true;
}

void palindrome_strings(string* string_list, int size) {
    for (int i = 0; i < size; i++) {
        if (is_palindrome(string_list[i])) {
            cout << string_list[i] << " ";
        }
    }
    cout << endl;
}

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void eratosthenes_function(int* num_list, int size) {
    for (int i = 0; i < size; i++) {
        if (is_prime(num_list[i])) {
            cout << num_list[i] << " ";
        }
    }
    cout << endl;
}

string sort_string(string s) {
    sort(s.begin(), s.end());
    return s;
}

void anagrams(string word, string* word_list, int size) {
    string sorted_word = sort_string(word);
    for (int i = 0; i < size; i++) {
        if (word.size() == word_list[i].size() && sorted_word == sort_string(word_list[i])) {
            cout << word_list[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int list1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int list2[] = {4, 5, 6, 7, 8};
    int size2 = sizeof(list2) / sizeof(list2[0]);
    cout << "Common elements: ";
    common_elements(list1, size1, list2, size2);

    string string_list[] = {"racecar", "hello", "madam", "python"};
    int size = sizeof(string_list) / sizeof(string_list[0]);
    cout << "Palindromes: ";
    palindrome_strings(string_list, size);

    int num_list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int num_list_size = sizeof(num_list) / sizeof(num_list[0]);
    cout << "Primes: ";
    for (int i = 0; i < num_list_size; i++) {
        if (is_prime(num_list[i])) {
            cout << num
