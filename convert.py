import csv
import json
from pathlib import Path

BASE_DIR = Path(__file__).resolve().parent
CSV_PATH = BASE_DIR / "gpsdata.csv"
JSON_PATH = BASE_DIR / "output.json"

result = []

with CSV_PATH.open("r", encoding="utf-8-sig", newline="") as f:
    reader = csv.reader(f)
    for row in reader:
        if len(row) < 3:
            continue
        lat = float(row[0].strip())
        lon = float(row[1].strip())
        info = row[2].strip()

        result.append({
            "latitude": lat,
            "longitude": lon,
            "info": info
        })

with JSON_PATH.open("w", encoding="utf-8") as f:
    json.dump(result, f, ensure_ascii=False, indent=2)

print(f"변환 완료: {len(result)}개 지점 -> {JSON_PATH}")