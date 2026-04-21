# Bitwise Operators

Bitwise operators work directly on the binary (bit-level) representation of integers.

| Operator | Name             | Description                            |
| -------- | ---------------- | -------------------------------------- |
| `&`      | AND              | Sets bit to 1 if both bits are 1       |
| `\|`     | OR               | Sets bit to 1 if at least one bit is 1 |
| `^`      | XOR              | Sets bit to 1 if bits are different    |
| `~`      | NOT (Complement) | Inverts all bits                       |
| `<<`     | Left Shift       | Shifts bits to the left                |
| `>>`     | Right Shift      | Shifts bits to the right               |

## Bitwise AND $(\&)$

#### Rule

```
1 & 1 = 1
otherwise = 0
```

#### Example

```cpp
int a = 5;   // 0101
int b = 3;   // 0011
cout << (a & b);  // 0001 → 1
```

## Bitwise OR $(|)$

#### Rule

```
1 | 0 = 1
0 | 1 = 1
1 | 1 = 1
0 | 0 = 0
```

#### Example

```cpp
cout << (5 | 3); // 0101 | 0011 = 0111 → 7
```

## Bitwise XOR (^)

#### Rule

```
1 ^ 0 = 1
0 ^ 1 = 1
1 ^ 1 = 0
0 ^ 0 = 0
```

#### Example

```cpp
cout << (5 ^ 3);  // 0101 ^ 0011 = 0110 → 6
```

#### Special Properties

- `a ^ a = 0`
- `a ^ 0 = a`

Used for swapping numbers without temp variable.

## Bitwise NOT (~)

#### Rule

```
1 → 0
0 → 1
```

#### Example

```cpp
cout << (~5);
```

- Result depends on 2’s complement representation

For 32-bit int:

```cpp
5 = 000...0101
~5 = 111...1010 = -6
```

## Left Shift (<<)

#### Rule

- Shifts bits left
- Adds zeros on right
- Equivalent to multiplying by 2

#### Example

```cpp
cout << (5 << 1);  // 0101 → 1010 = 10
cout << (5 << 2);  // 0101 → 10100 = 20
```

#### Formula

$a << n = a × (2^n)$

## Right Shift (>>)

#### Rule

- Shifts bits right
- Removes bits from right

#### Example

```cpp
cout << (5 >> 1); // 0101 → 0010 = 2
```

#### Formula

$a >> n = a / (2^n)$

## Common Uses

### 1. Power of Two Check

A number is a power of 2 if it has only one set bit (1) in binary.

```cpp
n & (n - 1) == 0   // only true for powers of 2
```

### 2. Even Check

Check the least significant bit (LSB)

```cpp
n & 1
```

- 0 → even
- 1 → odd
