// Problem :- 2667. Create Hello World Function
// Link :- https://leetcode.com/problems/create-hello-world-function/?gio_link_id=QPDw0kJR

// Solution:
/**
 * @return {Function}
 */
var createHelloWorld = function() {
    return function(...args) {
        return "Hello World";
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */