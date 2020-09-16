# test c++ performance on sorting

## 0. environment

- OS: MacOS Catalina 10.15.5
- CPU: Intel Core i5
- Value Count: 100000

## 1. sort integers

- build

```bash
g++ sort_int.cpp -O3 -o sort_int -std=c++17
```

- run

```bash
./sort_int
```

- result

```txt
sort pointers: total time=6.401000ms
sort values: total time=6.495000ms
```

## 2. sort strings

- build

```bash
g++ sort_string.cpp -O3 -o sort_string -std=c++17
```

- run

```bash
./sort_string
```

- result

```txt
sort pointers: total time=29.152000ms
sort values: total time=23.287001ms
```
