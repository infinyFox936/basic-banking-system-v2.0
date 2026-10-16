# Simple Banking System v2.0

A command-line banking management system written in C++.

## Features

- **Deposit**: Add funds to your account
- **Withdraw**: Remove funds from your account (with balance validation)
- **Check Balance**: View your current account balance
- **List Details**: View full account details including name and balance

## Requirements

- C++ compiler (g++, clang++, etc.)
- No external dependencies

## Installation

1. Clone or download the repository
2. Compile the source files:
   ```bash
   g++ main.cpp src/account.cpp -o banking-system
   ```
or
1. Download the binary release
2. change permissions so the file can be executable (on Mac / Linux): `chmod +x banking-system`

## Usage

1. Run the compiled executable:
   ```bash
   ./bank-system
   ```

2. Enter your account name (one word only)

3. Choose from the following options:
   - `a` - Show all account details
   - `w` - Withdraw money
   - `d` - Deposit money
   - `b` - Check current balance
   - `q` - Quit

## How It Works

The `Account` class manages account operations:
- `balance`: Integer storing the current account balance (initially 0)
- `name`: String storing the account holder's name

All operations validate that withdrawal amounts don't exceed the current balance.

## License

MIT License - feel free to use and modify!

---
Author: https://github.com/infinyFox936

---
The code was made manually (no AI, except for a little debugging)
The README.md and the description were made by Qwen3.5 9B