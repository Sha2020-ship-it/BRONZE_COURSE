#include <bits/stdc++.h>
using namespace std;

pair<int, int> solve(char positions[3][3]) {
    int numInd = 0, numDuo = 0;

    set<char> r1, r2, r3, c1, c2, c3, d1, d2;

    for (int i = 0; i < 3; i++){
        r1.insert(positions[0][i]);
        r2.insert(positions[1][i]);
        r3.insert(positions[2][i]);
        c1.insert(positions[i][0]);
        c2.insert(positions[i][1]);
        c3.insert(positions[i][2]);
        d1.insert(positions[i][i]);
        d2.insert(positions[i][2-i]);
    }

    if (r1.size() == 1){
        numInd = numInd + 1;
    }

    if (r1.size() == 2){
        numDuo = numDuo + 1;
    }

    if (r2.size() == 1){
        if (r1 != r2){
            numInd = numInd+1;
        }
    }

    if (r2.size() == 2){
        if (r1 != r2) {
            numDuo = numDuo+1;
        }
    }

    if (r3.size() == 1){
        if (r1 != r3){
            if (r2 != r3){
                numInd = numInd+1;
            }
        }
    }

    if (r3.size() == 2){
        if (r1 != r3){
            if (r2 != r3){
                numDuo = numDuo+1;
            }
        }
    }

    if (c1.size() == 1){
        if (r1 != c1){
            if (r2 != c1){
                if (r3 != c1){
                    numInd = numInd + 1;
                }
            }
        }
    }

    if (c1.size() == 2){
        if (r1 != c1){
            if (r2 != c1){
                if (r3 != c1){
                    numDuo = numDuo + 1;
                }
            }
        }
    }

    if (c2.size() == 1){
        if (r1 != c2){
            if (r2 != c2){
                if (r3 != c2){
                    if (c1 != c2){
                        numInd = numInd + 1;
                    }
                }
            }
        }
    }

    if (c2.size() == 2){
        if (r1 != c2){
            if (r2 != c2){
                if (r3 != c2){
                    if (c1 != c2){
                        numDuo = numDuo + 1;
                    }
                }
            }
        }
    }

    if (c3.size() == 1){
        if (r1 != c3){
            if (r2 != c3){
                if (r3 != c3){
                    if (c1 != c3){
                        if (c2 != c3){
                            numInd = numInd + 1;
                        }
                    }
                }
            }
        }
    }

    if (c3.size() == 2){
        if (r1 != c3){
            if (r2 != c3){
                if (r3 != c3){
                    if (c1 != c3){
                        if (c2 != c3){
                            numDuo = numDuo + 1;
                        }
                    }
                }
            }
        }
    }

    if (d1.size() == 1){
        if (r1 != d1){
            if (r2 != d1){
                if (r3 != d1){
                    if (c1 != d1){
                        if (c2 != d1){
                            if (c3 != d1){
                                numInd = numInd+1;
                            }
                        }
                    }
                }
            }
        }
    }

    if (d1.size() == 2){
        if (r1 != d1){
            if (r2 != d1){
                if (r3 != d1){
                    if (c1 != d1){
                        if (c2 != d1){
                            if (c3 != d1){
                                numDuo = numDuo+1;
                            }
                        }
                    }
                }
            }
        }
    }

    if (d2.size() == 1){
        if (r1 != d2){
            if (r2 != d2){
                if (r3 != d2){
                    if (c1 != d2){
                        if (c2 != d2){
                            if (c3 != d2){
                                if (d1 != d2){
                                    numInd = numInd+1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if (d2.size() == 2){
        if (r1 != d2){
            if (r2 != d2){
                if (r3 != d2){
                    if (c1 != d2){
                        if (c2 != d2){
                            if (c3 != d2){
                                if (d1 != d2){
                                    numDuo = numDuo+1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return make_pair(numInd, numDuo);
}

int main(){
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    char positions[3][3];

    for (int i = 0; i < 3; i++){
        string temp;
        cin >> temp;
        for (int j = 0; j < 3; j++){
            positions[i][j] = temp[j];
        }
    }

    pair<int, int> ans = solve(positions);
    int ans1 = ans.first;
    int ans2 = ans.second;

    cout << ans1 << "\n" << ans2 << "\n";
}
