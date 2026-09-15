function calculate() {

    let a = parseFloat(document.getElementById("firstNumber").value);
    let b = parseFloat(document.getElementById("secondNumber").value);
    let op = document.getElementById("operator").value;

    let result;

    if (isNaN(a) || isNaN(b)) {
        document.getElementById("result").innerText =
            "Please enter both values!";
        return;
    }

    switch (op) {

        case "+":
            result = a + b;
            break;

        case "-":
            result = a - b;
            break;

        case "*":
            result = a * b;
            break;

        case "/":

            if (b === 0) {
                document.getElementById("result").innerText =
                    "Cannot divide by zero!";
                return;
            }

            result = a / b;
            break;

        default:
            document.getElementById("result").innerText =
                "Invalid operator!";
            return;
    }

    document.getElementById("result").innerText =
        "Result: " + result.toFixed(2);
}
