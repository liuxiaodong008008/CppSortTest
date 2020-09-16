# test c++ performance on sorting

## 0. environment

- OS: MacOS Catalina 10.15.5
- CPU: Intel Core i5
- Thread: Single
- Value Count: 10000

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
sort pointers: total time=0.542000ms
sort values: total time=0.578000ms
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
sort pointers: total time=1.807000ms
sort values: total time=1.827000ms
```