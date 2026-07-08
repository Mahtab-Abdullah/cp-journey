# Git Cheatsheet — Daily CP Workflow

## One-time setup (already done, just for reference)

```bash
git config --global user.name "Your Name"
git config --global user.email "your-github-email@example.com"
```

Check SSH connection works:

```bash
ssh -T git@github.com
```

---

## Daily workflow (repeat this every time you solve a problem)

```bash
cd ~/Documents/cp-journey    # go into your repo folder
```

### 1. See what changed

```bash
git status
```

### 2. Stage your file(s)

```bash
git add .
```

(stages everything changed — fine as long as you're only working inside this repo)

Or stage a specific file only:

```bash
git add path/to/your-file.c
```

### 3. Commit with a message

```bash
git commit -m "Solve CSES XXXX - Problem Name"
```

### 4. Push to GitHub

```bash
git push
```

---

## Quick reference — the 4 commands, in order

```bash
git status
git add .
git commit -m "Solve CSES XXXX - Problem Name"
git push
```

That's it. This is 95% of what you'll ever need day-to-day.

---

## Occasionally useful

**Move/rename a file:**

```bash
mv old-name.c new-name.c
```

**See folder structure:**

```bash
tree
```

**Clone a repo (only needed once, or on a new machine):**

```bash
git clone git@github.com:yourusername/cp-journey.git
```

**Check commit history:**

```bash
git log --oneline
```

---

## If something goes wrong

Paste the exact error message and ask — git errors look scary but are almost always a one-line fix.
