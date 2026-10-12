# Flottants IEEE 754 — companion TC-FT-RNLB-03

Les démos de la séance *Flottants IEEE 754*, une étape par répertoire, une target par étape.

| Étape | Ce qu'elle montre |
|---|---|
| `01_flottants` | division par zéro, `NaN`, et ce que valent les comparaisons après |

## Compiler et lancer

```powershell
cmake -S . -B build
cmake --build build
```

Puis `build/01_flottants/01_flottants.exe`.

Conventions : voir `01 courses/companion projects/CLAUDE.md` et la skill `programmation-cpp`.
