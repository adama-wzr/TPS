# Transport Phenomena Studies

This repository is a collection of tests and interesting case-studies pertinent to theoretical and applied transport phenomena. Like the name implies, this is simply a collection of studies, as opposed to being one central package committed to solving transport phenomena.

# Table of Contents

1. [Motivations](#motivations)
2. [Requirements](#requirements)
3. [Compilation](#compilation)
4. [Documentation](#documentation)
5. [Publications](#publications)
6. [Authors](#authors)
7. [Acknowledgements](#acknowledgements)
8. [License](#license)
9. [Upcoming Changes](#future-updates)

# Motivations

There are two main motivators to this package:

1. In recent publications, I have noticed a sort of inflation regarding the number of repositories I have available. This quickly becomes a burden; for example I have the PixelBasedPermeability package and the EffectiveDiffusivityFVM. What happens if I want to combine flow and diffusive mass transfer? Which package does it go to? Also, I have to preserve the original codes from publications, so I can't make changes that would override the original contents of the packaged that are pertinent to each publication. Long story short, I will compile interesting studies in computational fluid dynamics, numerical heat and mass transfer, and analytical solutions in this repository. Hopefully this makes comparison between different models (and analytical solutions) easier, while also keeping an archive of my published works.

2. I never received a formal education as a software engineer or any adjacent field. In the past few years, I have been trying to get better at programming (C/C++ primarily for the scientific computing, also using Python for machine-learning and UI-building). This is just another opportunity to learn how to properly structure my code, how to properly organize the package, and how to organize the repository. This is the main reason you won't find LLM-generated code: the whole point is learning things. I am sure modern LLMs would do a better job than me at coding, but it can't learn for me, and I don't know what to ask it if I don't know how programming works in the first place.

# Requirements

The package is currently structured for Linux users with performance in mind. The Windows version doesn't support GPU acceleration, and the parallel computing is limited to OpenMP acceleration. Having that in mind, please use the following requirements:

- gcc >= 11.0
- C++ >= 17
- CMAKE >= 3.15
- OpenMP >= 4.5
- **(Optional)** CUDA >= 12

Things might work with older packages, I just haven't tested it.

# Compilation

Please use cmake to build in the `build` folder:
```
cmake ..
cmake --build . --config Release
```

If you don't know CMake, do a quick tutorial on their website.

# Documentation

There currently is no documentation in digital format. I will add it as soon as it's available :)

# Publications

There are currently no publications directly associated with this code.

# Authors

If you would like to contribute, suggest changes, or ask questions, please do so here on GitHub or via email.

- Main developer: Andre Adam
    - [ResearchGate](https://www.researchgate.net/profile/Andre-Adam-2)
    - [GoogleScholar](https://scholar.google.com/citations?hl=en&user=aP_rDkMAAAAJ)
    - [ORCID](https://orcid.org/0000-0002-4502-3033)
    - [Website](https://adama-wzr.github.io/)

# Acknowledgements

I would like to acknowledge all the coffee producers around the world, without you I would have many headaches and would not be able to focus properly. I am addicted to this poison. I would also like to thank Gojira, for indirectly supporting me.

# License

This work is licensed under the GPL v3.0 license. Please read the license if you plan on forking the code, modifying it, or re-packaging it. Remember that any derivative of a GPL v3.0 code must retain the access to the source code.

# Future Changes

I just started, but I will update this in a bit, when I have a better idea of what I am doing. Right now, we should only have a demo of the code and structure of the package for 2D simulations.
