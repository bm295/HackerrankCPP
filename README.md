# HackerrankCPP → C# 14 (preview)

Repo này đã được viết lại theo hướng C# (thiết lập `LangVersion=preview` để sẵn sàng cho C# 14).

## Cách chạy

```bash
dotnet run
```

## Nội dung chính

- Port các bài HackerRank cơ bản sang C# trong thư mục `src/Exercises`:
  - Input/Output, basic data types, điều kiện, vòng lặp, hàm.
  - Mảng, string, parse CSV, collection operations (`set`, `map`, `lower_bound`, sort, erase).
  - OOP: class, kế thừa, đa cấp kế thừa, polymorphism, generic class, record `Box`.
- Bổ sung ví dụ quản lý tài nguyên trong `src/Resources/DisposableExamples.cs`:
  - `using (...)` với `IDisposable`.
  - `using var` với `IDisposable`.
  - `await using` với `IAsyncDisposable`.

## Gợi ý mở rộng

- Có thể tách mỗi bài thành project console riêng để tương thích 1-1 với format chấm HackerRank.
- Có thể thêm test xUnit cho từng bài nếu muốn CI kiểm tra tự động.
