# Quay Số

Bạn quay số may mắn $N$ lần. Ở lần thứ $i$, bạn quay được một món đồ mô tả bằng một xâu $S_i$.

***Yêu cầu:*** Hãy đếm xem có bao nhiêu loại món đồ khác nhau bạn đã quay trúng? Hai món đồ khác nhau là hai món có xâu mô tả chúng khác nhau?

## Input

- Dòng đầu tiên chứa số $N$.
- Trên $N$ dòng tiếp theo, dòng thứ $i$ chứa xâu $S_i$.

## Constraints

- $1 \le N \le 2 \times 10^5$.
- $1\le |S_i| \le 10; \forall i: 1 \le i \le N$.
- $S_i$ chỉ chứa các chữ cái tiếng Anh viết thường.

## Output

- Một số là số loại món đồ khác nhau bạn đã quay trúng.

## Sample input 1

```
3
apple
orange
apple
```

## Sample output 1

```
2
```


## Sample input 2

```
5
grape
grape
grape
grape
grape
```

## Sample output 2

```
1
```

