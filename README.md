import os

# Path to your DSA repo
repo_path = "/path/to/DSA_Questions"

# Topics mapping (adjust if you have more topics)
topics = {
    "Arrays": [],
    "Greedy": [],
    "Backtracking / Recursion": [],
    "Dynamic Programming": [],
    "Binary Tree": [],
    "Others": []
}

# Mapping of problem numbers to topics (can customize)
problem_topic_map = {
    "0001": "Arrays",
    "0015": "Arrays",
    "0039": "Arrays",
    "0040": "Arrays",
    "0046": "Backtracking / Recursion",
    "0047": "Backtracking / Recursion",
    "0053": "Arrays",
    "0078": "Backtracking / Recursion",
    "0079": "Backtracking / Recursion",
    "0101": "Binary Tree",
    "0103": "Binary Tree",
    "0104": "Binary Tree",
    "0110": "Binary Tree",
    "0131": "Backtracking / Recursion",
    "0198": "Dynamic Programming",
    "0213": "Dynamic Programming",
    "0216": "Backtracking / Recursion",
    "0287": "Arrays",
    "0435": "Greedy",
    "0540": "Arrays",
    "0987": "Binary Tree",
    "1423": "Arrays",
    "1498": "Arrays",
    "1922": "Others",
    "2016": "Others",
    "2395": "Others",
    "2498": "Arrays",
    "3211": "Others",
    "3457": "Others",
    "3467": "Arrays"
}

# Scan repo folder
for file in sorted(os.listdir(repo_path)):
    if file.endswith(".cpp") or file.endswith(".py"):  # include your solution files
        problem_number = file.split("-")[0]
        topic = problem_topic_map.get(problem_number, "Others")
        topics[topic].append(file)

# Create README content
readme_lines = ["# DSA Questions Solved ✅\n",
                "This repository contains only the DSA problems that I have solved so far.\n",
                "## 📂 Problems List (Topic-wise)\n"]

for topic, files in topics.items():
    if files:
        readme_lines.append(f"### {topic}\n")
        for f in files:
            problem_name = f.split("-", 1)[1].replace(".cpp","").replace(".py","").replace("-", " ").title()
            readme_lines.append(f"1. {problem_name} (`{f}`)\n")
        readme_lines.append("\n")

# Write to README.md
with open(os.path.join(repo_path, "README.md"), "w") as f:
    f.writelines(readme_lines)

print("README.md updated successfully!")
