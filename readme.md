# Turkish Identification Number (TC Kimlik Numarası) Validator

This C++ program is designed to validate Turkish Identification Numbers (TC Kimlik Numarası). In Turkey, every citizen has a unique identification number, and this program checks if the given identification number might be valid or not. 

## How It Works

The program takes an input for a long integer, which represents a Turkish Identification Number (TC Kimlik Numarası). It then calculates the last digit of the input number and the sum of the digits in the remaining 10 digits.

Here's a step-by-step explanation of how the program works:

1. It prompts the user to enter a Turkish Identification Number.
2. It extracts and stores the last digit of the input number.
3. It iterates through the remaining 10 digits of the number while calculating their sum.
4. After the loop, it checks if the sum of the 10 digits modulo 10 is equal to the last digit extracted earlier.
5. If the modulo operation result matches, the program prints "kimlik doğru olabilir," which means "the identification might be correct."
6. Otherwise, it prints "kimlik kesinlikle yanlış," which means "the identification is definitely incorrect."

## Usage

To use this program, follow these steps:

1. Compile the program using a C++ compiler.
2. Run the compiled program.
3. Enter a Turkish Identification Number when prompted.

## Example

Here's an example of how you might use this program:

```
TC Kimlik Numarası: 12345678901
```

Program Output:

```
kimlik doğru olabilir
```

This indicates that the entered identification number might be valid.

**Note:** This program provides a simple validation mechanism and does not guarantee the accuracy of the identification number. It's important to use official government services to validate identification numbers for official purposes.

## Contributing

Contributions are always welcome!


## License

[MIT](https://choosealicense.com/licenses/mit/)

