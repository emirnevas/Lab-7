def common_elements(list1, list2):
    set1 = set(list1)
    common_set = set()
    for num in list2:
        if num in set1:
            common_set.add(num)
    common_list = list(common_set)
    return common_list


def palindrome_strings(string_list):
    palindrome_list = []
    for string in string_list:
        if string == string[::-1]:
            palindrome_list.append(string)
    return palindrome_list


def eratosthenes_function(num_list):
    primes = []
    is_prime = [True] * (max(num_list) + 1)
    is_prime[0] = False
    is_prime[1] = False
    for num in range(2, len(is_prime)):
        if is_prime[num]:
            primes.append(num)
            for multiple in range(num*num, len(is_prime), num):
                is_prime[multiple] = False
    prime_list = []
    for num in num_list:
        if num in primes:
            prime_list.append(num)
    return prime_list


def anagrams(word, word_list):
    word_freq = [0] * 26
    for char in word.lower():
        if char.isalpha():
            word_freq[ord(char) - ord('a')] += 1
    anagram_list = []
    for string in word_list:
        string_freq = [0] * 26
        for char in string.lower():
            if char.isalpha():
                string_freq[ord(char) - ord('a')] += 1
        if word_freq == string_freq:
            anagram_list.append(string)
    return anagram_list


# Example usage:
list1 = [3, 8, 9, 7, 4]
list2 = [4, 5, 6, 7, 8]
common_list = common_elements(list1, list2)
print("Common elements:", common_list)

string_list = ['racecar', 'hello', 'madam', 'python']
palindrome_list = palindrome_strings(string_list)
print("Palindromes:", palindrome_list)

num_list = [2, 3, 4, 5, 6, 7, 8, 9]
prime_list = eratosthenes_function(num_list)
print("Primes:", prime_list)

word = "listen"
word_list = ["enlists", "google", "inlets", "banana"]
anagram_list = anagrams(word, word_list)
print("Anagrams of", word, ":", anagram_list)
