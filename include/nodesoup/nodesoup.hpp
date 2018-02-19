#include <functional>
#include <vector>

#include "geometry.hpp"
#include "graph.hpp"

namespace nodesoup {
using iter_callback_type = std::function<void(const std::vector<Point2D>&, int)>;

std::vector<Point2D> fruchterman_reingold(
    const adj_list_type& g,
    unsigned int width,
    unsigned int height,
    unsigned int iters_count = 300,
    double k = 15.0,
    iter_callback_type iter_cb = nullptr);

std::vector<Point2D> kamada_kawai(
    const adj_list_type& g,
    unsigned int width,
    unsigned int height,
    double k = 300.0,
    double energy_threshold = 1e-2);

std::vector<double> size_radiuses(const adj_list_type& g, double base_radius = 4.0, double k = 300.0);
}
