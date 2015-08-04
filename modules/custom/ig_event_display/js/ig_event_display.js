/**
 * Render the event display.
 */
angular.module('eventApp', ['ngAnimate'])
.controller('eventController', function($http, $scope, $timeout) {

    var eventData = Drupal.settings.igEventDisplay,
        initialFetch = true;

    var rotate = function () {
        if ($scope.items && $scope.items.length) {
            $scope.currentItemIndex = ($scope.currentItemIndex >= $scope.items.length - 1) ? 0 : ++$scope.currentItemIndex;
        }
        $timeout(rotate, 7000);
    };

    $scope.eventSettings = Drupal.settings.igEventDisplay;
    $scope.currentItemIndex = -1;

    $http.get(eventData.url + '/api/event/' + eventData.nid).
        success(function(data) {
            $scope.items = data;
            if (initialFetch) {
                $scope.isLoaded = true;
                initialFetch = false;
                rotate();
            }
        })
        .error(function(error) {
        });
})
.directive('animateOnChange', function($animate) {
    return {
        scope: {
            animateOnChange: '=',
            animationClass: '@'
        },
        link: function(scope, elem, attr) {
            var animationClass = scope.animationClass;
            scope.$watch('animateOnChange', function (newValue, oldValue) {
                if (newValue === oldValue) return;
                $animate.addClass(elem, animationClass).then(function() {
                    element.removeClass(animationClass);
                });
            });
        }
    }
});