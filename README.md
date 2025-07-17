A pet project.

Simple calculator in Qt.

Expression class inputs a specially formatted string (every token spaced from two sides) and solves the given expression using reversed polish notation.

Calculator class has the main logic receiving inputs and converting them into formatted string for the Expression class. During the inputs, strings are returned to be displayed to the user. At calculate() it recreates new Expression instance with the full expression.

Mainwindow catches all the button presses and converts those into Calculator inputs while refreshing the display (textBox).
