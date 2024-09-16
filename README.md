<!DOCTYPE html>
<html lang="en">
<body>
    <div class="container">
        <h1>Libft - Custom C Library</h1>
        <div class="title">
            <h2>Introduction</h2>
        </div>
        <p>
            <span class="highlight">Libft</span> is a custom C library that contains implementations of commonly used functions in C. 
            This library is designed to serve as a helpful toolkit for future projects in programming. The functions included in this library 
            replicate standard C library functions with additional helpful features for building projects.
        </p>
        <div class="title">
            <h2>Mandatory Part</h2>
        </div>
        <h3>Part 1 - Libc Functions</h3>
        <p>These are re-implemented standard C library functions that follow the prototypes of the originals but with the prefix <span class="highlight">ft_</span>. No external libraries are used.</p>
        <ul>
            <li><span class="highlight">ft_isalpha</span> - Checks if the character is an alphabetic letter.</li>
            <li><span class="highlight">ft_isdigit</span> - Checks if the character is a digit.</li>
            <li><span class="highlight">ft_isalnum</span> - Checks if the character is a digit or letter.</li>
            <li><span class="highlight">ft_strlen</span> - Calculates the length of a string.</li>
            <li><span class="highlight">ft_memset</span> - Fills a block of memory with a specific byte.</li>
            <!-- Add more items as needed -->
        </ul>
        <h3>Part 2 - Additional Functions</h3>
        <ul>
            <li><span class="highlight">ft_substr</span> - Extracts a substring from a string, starting at a specific index.</li>
            <li><span class="highlight">ft_strjoin</span> - Concatenates two strings into a new string.</li>
            <li><span class="highlight">ft_split</span> - Splits a string into an array of substrings using a delimiter.</li>
            <li><span class="highlight">ft_itoa</span> - Converts an integer into a string.</li>
        </ul>
        <div class="title">
            <h2>Bonus Part - Linked List Functions</h2>
        </div>
        <p>The following additional functions help with linked list operations. A linked list consists of nodes where each node contains data and a pointer to the next node.</p>

        <div class="code">
<pre>
typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;
</pre>
 </div>
        <ul>
            <li><span class="highlight">ft_lstnew</span> - Creates a new list node.</li>
            <li><span class="highlight">ft_lstadd_front</span> - Adds a node at the beginning of the list.</li>
            <li><span class="highlight">ft_lstsize</span> - Counts the number of nodes in the list.</li>
            <li><span class="highlight">ft_lstlast</span> - Returns the last node in the list.</li>
        </ul>
        <div class="title">
            <h2>Usage Instructions</h2>
        </div>
        <p>To compile the library and generate <span class="highlight">libft.a</span>:</p>
        <div class="code-snippet">make</div>
        <p>To compile your project with <span class="highlight">libft</span>, link it like this:</p>
        <div class="code-snippet">
gcc -Wall -Wextra -Werror -L. -lft your_file.c -o your_program
    </div>
        <div class="title">
            <h2>Memory Management</h2>
        </div>
        <p>Remember to free memory allocated by functions like <span class="highlight">ft_substr</span>, <span class="highlight">ft_strdup</span>, and others to avoid memory leaks.</p>
        <div class="title">
            <h2>License</h2>
        </div>
        <p>This project is licensed under the MIT License.</p>
    </div>
</body>
</html>
